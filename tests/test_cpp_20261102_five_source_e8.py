"""Five source-only C++17 declarations: exact-source drift guards, NOT Xbox ABI proof."""
import hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PREFIX = ('/* Source-matched C++17 declaration; retail XBE E8/RET observed.\n'
          ' * Callee draft signature only; Xbox ABI_UNVERIFIED. */\n')
# caller, callee, original caller source SHA256, callee source SHA256, callee draft signature
CASES = (
 ('0013aad0','00135d60','96469e3bbe441fb3b7e91dcb21355ecd57abb25147a22b4f7f82d8c964551ebf','6860172bdf9b4e99339020cec2aa97510718338c4ca375f6829a10f0a13cf7d8','undefined4 FUN_00135d60(void)'),
 ('001516c0','00150930','89d5ffcc2b6f57450ab5290b02b4d0c19c642304dead21fae71deebf81b2d5b3','316f48b65d733187beced7bea7c5a0e538eee1be103bb302b967b1032c70c340','void FUN_00150930(void)'),
 ('0029d000','00234c90','ffd0562acad776881e3ed3bf1577052a833d8ddc4e4650faa1e85c0c554e3d32','306b1c2cd64b8809d6ec9bf091b19fd6acf82876ed6f558832c19fe3a9301097','int FUN_00234c90(void)'),
 ('00292690','002eba73','7f1d8112a237d6f2a477b0bf7cb3456fd602b5a5d8530bc5184c0fe59a6abe35','1a1160f8d08a3cf7d01b42b0f200207b945be56fe5a8c0251b4635647d66effe','ushort FUN_002eba73(int param_1,ushort param_2)'),
 ('001051e0','000ef180','9742ea935c2d4f979bd22ace5b5d73c8ff06c7f9aa8cd4e8f2c1baefdf30cb22','5118f246a3904178b3b347f595be24b74d326e38805cfc47188d0804763f1556','void FUN_000ef180(void)'),
)

def sha(text):
    return hashlib.sha256(text.encode('utf-8')).hexdigest()

def verify(root=ROOT):
    for caller, callee, caller_sha, callee_sha, signature in CASES:
        src = (root / f'src/main_unclassified/band_{caller[:4]}/0x{caller}.cpp').read_text()
        target = (root / f'src/main_unclassified/band_{callee[:4]}/0x{callee}.cpp').read_text()
        insertion = PREFIX + f'extern {signature};\n'
        assert src.count(insertion) == 1 and src.count('Input x86 body SHA-256:') == 1, caller
        assert sha(src.replace(insertion, '', 1)) == caller_sha, f'{caller}: source/body drift'
        assert sha(target) == callee_sha and signature + '\n' in target, f'{callee}: callee drift'
        assert sha(src.replace(insertion, '', 1) + '!') != caller_sha, caller
        assert sha(target + '!') != callee_sha, callee
    return len(CASES)

if __name__ == '__main__':
    print(f'PASS: {verify()} exact-source declaration gates; Xbox ABI_UNVERIFIED')
