# 0x002D44F0: raw words, partial counters and connected stack storage

Scope: changed original operands/storage and focused C11 syntax. Complete
entry/callee interfaces, guest translation and behavior remain unverified.

The whole original XBE matches
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
The contiguous 500-byte caller body at `0x002D44F0` hashes to
`E14462DCA6DA6E06808A74AD2289FA584F59E15985DA4063D8D595434347E9B9`.
The 190-byte helper at `0x002BA260` hashes to
`60E1F14FAAECC9A839CD75D7A3DDE838D215CB519421893B5BD09D15AD00316E`.
Both bodies were authenticated before editing.

## Observed word operands and branches

Original EAX is saved in EDI at `0x002D44F6`. Fields +0xEC/+0xF0,
+0xF4/+0xF8 and +0x108 are loaded with MOV as raw DWORDs. The old float
array view numerically converted these guest addresses, and promoted some
raw call words to doubles. The source now uses a word view and interprets
only the observed floating fields with the existing bit-preserving helper.

`0x002D44F8..0x002D4529` loads each of the two node addresses, reads its
header, executes SHL 28/SAR 30, subtracts the signed result from one, and
ADDs only a WORD at node+0x68. The signed two-bit values are 0,1,-2,-1;
the added values are 1,0,3,2. The source preserves modulo-65536 updates and
the neighboring two bytes. The late DEC at `0x002D46B4` is also only a
WORD write, after reloading the node pointer following the opaque calls.

The branch at `0x002D452A` tests a raw DWORD +0x0C rather than a float.
FCOMP and TEST AH,0x41 at `0x002D4537..0x002D4552` select EBX=0 only
for ordered greater-than; equality, less-than and unordered select EBX=1.
ECX is its complementary selector. The source preserves that branch rule.
The argument table at `0x002D4558` contains guest DWORD addresses and is
read as four-byte slots, rather than native pointer-sized objects.

## Actual stack object and output dataflow

Let T be ESP after the 0x50 allocation and EBX/EBP/EDI saves. The original
frame comprises five consecutive sixteen-byte regions:

| Region | Relative first byte | Observed contents |
| --- | --- | --- |
| 0 | T+0x0C | other selector's object+0x24/+0x28/+0x2C, fourth word zero |
| 1 | T+0x1C | other selector's object+0x44/+0x48/+0x4C, fourth word zero |
| 2 | T+0x2C | selected node+0xAC/+0xB0/+0xB4, fourth word zero |
| 3 | T+0x3C | selected node+0x9C/+0xA0/+0xA4, fourth word zero |
| 4 | T+0x4C | helper's three-float output, fourth word zero |

The actual call at `0x002D4638` passes six stack words: two original DWORD
fields at +0xF4/+0xF8, region 2, region 1, region 0 and region 4. All six
reach the retained C call. The output XYZ is not zero-initialized: it is
passed to the real helper, whose sixth argument is loaded at `0x002BA2DB`
and whose MOVSS/MOVHPS stores at `0x002BA312/0x002BA316` write twelve bytes.
That connected output supplies the later dot product.

The original helper also receives EAX=selected node, ESI=other node and
EDX=region 3. Those register inputs are still unbound in its ordinary C
draft. Naming the frame does not implement that bridge. Unlike a fabricated
zero result, the source leaves output XYZ uninitialized until the passed
callee writes it. No new callee prototype or register arguments were invented.

`0x002D463D..0x002D467A` multiplies output Y, Z and X by the corresponding
direction components, adding in that order on x87. Original memory constants
at `0x003A5000/0x003A5350` remain memory reads. The ordered comparison rejects
unordered outcomes. `float10` follows the existing draft convention; host
precision, rounding/control and exceptions are not an x87 emulator.

## Validation and limits

Focused checks pass unchanged C11 sweep flags for i686 and x86_64. Original
body digests and operand/call/storage windows were authenticated locally.
The entry signature and original address/hash labels are retained. Indirect
and direct helper register contracts, object extents and aliasing, guest
memory/fault behavior and whole-function execution remain ABI_UNVERIFIED.
No game code, platform import, installation, assets, saves, production data
or deployment was executed or changed by these checks.

Coordinator integration: independent review accepted the changed operand and
storage facts. Only affected inventory source fingerprints/syntax labels and
the original-byte verifier are updated at integration. ABI and behavior labels
remain unverified. Focused syntax does not replace the complete tree audit.
