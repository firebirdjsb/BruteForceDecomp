/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1890878BEE0F70548A3E9F90A2066F5CBCDFD6A9755F78158C617EEDE4A7011
 * Entry: 0x000defa0, Ghidra index: 2728, label: FUN_000defa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d004;
extern uint32_t DAT_0046d064;
int * FUN_000defa0(int param_1,int param_2,int param_3,int *param_4)

{
  char in_AL;
  int *piVar1;
  int *in_EDX;
  int *piVar2;
  
  if (*in_EDX == DAT_0046d064) {
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
  if (param_1 == 0) {
    if (param_2 != 0) {
      piVar2 = (int *)FUN_000da800();
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(piVar2[0x3a] + 0xc) = 0;
        (**(code **)(*piVar2 + 0x44))(param_2);
        FUN_0021c380(param_4);
      }
    }
  }
  else if (param_1 == 1) {
    if (param_3 != 0) {
      piVar1 = (int *)FUN_000da800();
      piVar2 = (int *)0x0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xe0))(param_3,&DAT_0046d004);
        goto LAB_000df006;
      }
    }
  }
  else if (((param_1 == 2) && (*param_4 != 0)) && (param_3 != 0)) {
    piVar1 = (int *)FUN_000da800();
    piVar2 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xdc))(param_3,param_4);
LAB_000df006:
      *(byte *)(piVar1 + 0x43) =
           *(byte *)(piVar1 + 0x43) ^ (in_AL << 1 ^ *(byte *)(piVar1 + 0x43)) & 2;
      FUN_0021c380(param_3);
      return piVar1;
    }
  }
  return piVar2;
}
