"""Three source-only C++17 declarations: exact-source drift guards, NOT Xbox ABI proof."""
import hashlib
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
PREFIX = ('/* Source-matched C++17 declaration; retail XBE E8/RET observed.\n'
          ' * Callee draft signature only; Xbox ABI_UNVERIFIED. */\n')
# caller, callee, original caller source SHA256, callee source SHA256, callee draft signature
CASES = (
 ('001827b0','001814e0','ea89c0189cb588073910240c69bbe6344d88d454a104663b21c57f1b712be9d1','bc1a08e3ee3b66ab3f579767fb10b2a6f2963de3b4a5ff9b11de9eb88d5f9e2d','float10 FUN_001814e0(void)'),
 ('002d22b0','00150930','bbd2d76d39c33241195197ffa821da949dd98a2ad668269e8250744fc66598d1','316f48b65d733187beced7bea7c5a0e538eee1be103bb302b967b1032c70c340','void FUN_00150930(void)'),
 ('002f1318','002eba73','06518cdb7ecbd33934d133ac8552e9537d73636d86623d7001ebb45216e89628','1a1160f8d08a3cf7d01b42b0f200207b945be56fe5a8c0251b4635647d66effe','ushort FUN_002eba73(int param_1,ushort param_2)'),
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
