/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA76EA414768B5384BEEFAE1EE76BD0DE845BE3AB9E207B28F5D760EC2BC01F6
 * Entry: 0x0008cbc0, Ghidra index: 1704, label: FUN_0008cbc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0008a130(undefined4 param_1,undefined4 param_2);
extern undefined4 FUN_0008cda0(void);
extern void FUN_0008a1a0(void);
extern void FUN_0008a4d0(void);
extern undefined4 FUN_0008b010(undefined4 param_1);
extern void FUN_000743f0(void);

extern uint32_t DAT_00469948;
extern uint32_t DAT_00469b58;
int FUN_0008cbc0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = FUN_002ea01d(0x70);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0008a130(param_4,in_ECX[0x12]);
  }
  cVar1 = FUN_0008cda0();
  if (cVar1 == '\0') {
    if (iVar2 != 0) {
      FUN_0008a1a0();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar2);
    }
    return 0;
  }
  if (param_3 != 4) {
    *(undefined4 *)(*(int *)(DAT_00469948 + 0x22c + param_2 * 4) + 0xc4) =
         *(undefined4 *)(DAT_00469948 + 0x21c + param_3 * 4);
  }
  FUN_0008a4d0();
  FUN_0008b010(param_5);
  iVar3 = (**(code **)(*in_ECX + 0x70))();
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if ((*piVar4 == 0x17506391) && (iVar3 != 0)) {
    FUN_000743f0();
  }
  return iVar2;
}
