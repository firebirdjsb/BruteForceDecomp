#!/usr/bin/env python3
"""Three retail-EAX return contracts: source-only C++17, not full Xbox ABI."""
import hashlib, os, shutil, struct, subprocess, unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
XBE_SHA = 'b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721'
NOTE = ('/* Original retail XBE preserves incoming EAX at every RET; expose only that\n'
        ' * observed return register. Guest pointer/host ABI remain ABI_UNVERIFIED. */\n')
DECL = '/* Original E8 call and callee EAX preservation verified; Xbox ABI_UNVERIFIED. */\n'
# callee, caller, return type, returns, preimage SHA256 (callee, caller),
# original body SHA256/length (callee, caller), E8 call VA
CASES = [
 ('000a0c60','0017e200','float *',1,
  '40e131116e78935475b0b1d5fa0f13274a04d08c70210247cf2bdfd913576666','aaede382db4c3542f614f618bc03f12adb24a8ffc99a272bf20239619b1462ba',
  '935B88AD31D3725F6207AA21E0490ED49242151D70F54666D78641AE85450B90',130,'92C5AB285F50B66C21555D08077352005BA0B81C14E19357D1E4A6FECA2A6BFF',729,0x0017e43b),
 ('002334b0','00232290','float *',1,
  '07898009003cc46987ec43599f123455c9c5e7a2ac0857492fe0d1b6cddd16ff','361b38f1ff91235f0607ab8f44b3869e30912e9fa61136440f59c8fdb622fadb',
  '9BB0B4B943F96BFC083B393902034811AAC5F139DD27A66A158A7FE6308AAC60',219,'7ABC76E9D3883DB6E58D388BD0022C0B91D600872B4C039B31CB111E4D02866B',538,0x00232445),
 ('0027e580','0027e5f0','int',2,
  '2ae9afc92cd30e02cae84f028482fd69c597c735c26819cf25296c5624ed8ef6','3152cd3f4064b6d6b91ca8d95fe9e3d8e30255fb0521103d71618d12d8b3d1c7',
  '8358708E600B6F9F067D56692D9392F122F720D7E717DC538F6BBC53154E445B',109,'5ECE598259D33E886F251990A652964A5782172A1B5A2BE55C8D66C2BD545757',130,0x0027e5f7),
]
def sha(b): return hashlib.sha256(b).hexdigest().lower()
def src(a): return ROOT/'src'/'main_unclassified'/('band_'+a[:4])/('0x'+a+'.cpp')
def va_bytes(b, va, n):
    base=struct.unpack_from('<I',b,0x104)[0]; table=struct.unpack_from('<I',b,0x120)[0]-base
    for i in range(struct.unpack_from('<I',b,0x11c)[0]):
        _,start,mem,off,stored=struct.unpack_from('<IIIII',b,table+i*56)
        if start<=va and va+n<=start+min(mem,stored): return b[off+va-start:off+va-start+n]
    raise AssertionError('missing XBE VA '+hex(va))
def call_target(va,op):
    assert len(op)==5 and op[0]==0xe8
    return (va+5+struct.unpack_from('<i',op,1)[0])&0xffffffff
class ReturnContracts(unittest.TestCase):
    def test_source_preimages(self):
        for ca,cr,typ,n,old_ca,old_cr,body,blen,caller_body,clen,call in CASES:
            with self.subTest(callee=ca):
                c=src(ca).read_text(); s=src(cr).read_text()
                signature=f'{typ} FUN_{ca}(void)'
                declaration=DECL+f'extern {typ} FUN_{ca}(void);\n'
                self.assertEqual(c.count(NOTE),1)
                self.assertEqual(c.count(signature),1)
                self.assertEqual(c.count('return in_EAX;'),n)
                self.assertEqual(s.count(declaration),1)
                previous=c.replace(NOTE,'',1).replace(signature,f'void FUN_{ca}(void)',1).replace('return in_EAX;','return;')
                self.assertEqual(sha(previous.encode()),old_ca)
                self.assertEqual(sha(s.replace(declaration,'',1).encode()),old_cr)
                self.assertIn('Input x86 body SHA-256: '+body,c)
                self.assertIn('Input x86 body SHA-256: '+caller_body,s)
    @unittest.skipUnless(shutil.which('clang++'),'Clang++17 unavailable')
    def test_six_original_address_sources(self):
        for ca,cr,*_ in CASES:
            for a in (ca,cr):
                with self.subTest(source=a):
                    p=subprocess.run(['clang++','-std=c++17','-fsyntax-only','-I',str(ROOT/'include'),str(src(a))],capture_output=True,text=True,timeout=60)
                    self.assertEqual(p.returncode,0,p.stderr[-3500:])
    def test_retail_bodies_calls_and_negative_controls(self):
        if not os.getenv('BF_ORIGINAL_XBE'): self.skipTest('Private retail XBE absent from CI')
        b=Path(os.environ['BF_ORIGINAL_XBE']).read_bytes();self.assertEqual(sha(b),XBE_SHA)
        for ca,cr,typ,n,old_ca,old_cr,body,blen,caller_body,clen,call in CASES:
            with self.subTest(callee=ca):
                self.assertEqual(sha(va_bytes(b,int(ca,16),blen)),body.lower())
                self.assertEqual(sha(va_bytes(b,int(cr,16),clen)),caller_body.lower())
                op=va_bytes(b,call,5);self.assertEqual(call_target(call,op),int(ca,16))
                mutant=bytearray(op);mutant[1]^=1
                self.assertNotEqual(call_target(call,mutant),int(ca,16))
                mutant=bytearray(va_bytes(b,int(ca,16),blen));mutant[0]^=1
                self.assertNotEqual(sha(mutant),body.lower())
        # Full authenticated callee bodies have no EAX/AX/AL/AH writes or calls.
        for ret in (0x000a0ce1,0x0023358a,0x0027e5c3,0x0027e5ec):
            self.assertEqual(va_bytes(b,ret,1),b'\xc3')
    def test_synthetic_negative(self):
        op=b'\xe8\x0b\x00\x00\x00';self.assertEqual(call_target(0x1000,op),0x1010)
        mutant=bytearray(op);mutant[1]^=1;self.assertNotEqual(call_target(0x1000,mutant),0x1010)
if __name__=='__main__': unittest.main()
