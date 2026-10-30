/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEF94A28464FD13185B15813D4CFA34E40D50D5FB9F79612769CE7BF989AC90E
 * Entry: 0x0008a890, Ghidra index: 1661, label: FUN_0008a890
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_0008a9d0(int *param_1);
extern undefined4 FUN_0005c110(void);
extern int FUN_0008acb0(void);
extern undefined4 FUN_0008ace0(int param_1);
extern undefined4 FUN_0008a720(undefined4 *param_1,int *param_2);

extern uint32_t DAT_00469b58;
uint FUN_0008a890(int param_1)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)(param_1 + 0x28) == 0) ||
     ((in_EAX = *(uint *)(param_1 + 0x10), in_EAX != 0 && ((*(byte *)(in_EAX + 0x70) & 1) == 0)))) {
    return in_EAX & 0xffffff00;
  }
  bVar1 = *(byte *)(param_1 + 0x6c);
  if ((bVar1 & 4) == 0) {
    iVar2 = FUN_0008a9d0(param_1);
    if (iVar2 == 0) goto LAB_0008a8d1;
    *(byte *)(param_1 + 0x6c) = bVar1 & 0xfb;
  }
  else {
LAB_0008a8d1:
    iVar2 = FUN_0005c110();
  }
  piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
  if (*piVar3 == 0x17506391) {
    if (iVar2 == 0) {
      iVar2 = FUN_0008acb0();
      if (iVar2 == 0) {
        iVar2 = FUN_0008ace0(param_1);
        goto LAB_0008a906;
      }
    }
  }
  else {
LAB_0008a906:
    if (iVar2 == 0) goto LAB_0008a911;
  }
  FUN_0008a720(param_1,iVar2);
LAB_0008a911:
  return (uint)(iVar2 != 0);
}
