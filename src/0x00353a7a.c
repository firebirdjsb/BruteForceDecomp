/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CA571ABCE724EA2E073E4DDAC5C597EEA6DD5FA1B0FF5A0966B905D4131C8BDF
 * Entry: 0x00353a7a, Ghidra index: 13096, label: FUN_00353a7a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00353a7a(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x10;
  uVar2 = *(undefined4 *)(param_1 + 0xc4);
  uVar1 = FUN_00353152(param_1);
  FUN_003539cf(param_1,*(undefined4 *)(param_1 + 0x44),*(undefined2 *)(param_1 + 0x4a),
               *(undefined2 *)(param_1 + 0x48),uVar1,uVar2,uVar3);
  return;
}
