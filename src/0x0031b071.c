/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C40E21F5478AE482E028D76EE6A6932FFB45AECC0514115C094AB34A090F50A6
 * Entry: 0x0031b071, Ghidra index: 12287, label: FUN_0031b071
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031b071(int param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  FUN_003118f0();
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined2 *)(param_1 + 10);
    FUN_0031af61(param_1);
    FUN_00311923();
    FUN_0031ac9a(uVar3,uVar2);
  }
  FUN_00311923();
  return;
}
