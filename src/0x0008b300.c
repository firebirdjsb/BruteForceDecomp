/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7E4F8B84B3CBF21E3667DE83C37BCC43102CC156D281CD473274F589ADAA9AB5
 * Entry: 0x0008b300, Ghidra index: 1676, label: FUN_0008b300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
extern uint32_t _DAT_004a5c10;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0008b300(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *unaff_EBX;
  undefined1 local_30 [48];
  
  if ((unaff_EBX != (int *)0x0) && (*unaff_EBX != DAT_0046d064)) {
    piVar1 = (int *)FUN_000da800();
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      iVar2 = FUN_0008b190();
      if (iVar2 == 0) {
        FUN_0003d7e0();
        piVar3 = unaff_EBX + 0x1f;
      }
      else {
        (**(code **)(*(int *)(iVar2 + 8) + 4))();
        FUN_0003d7e0();
        piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 0xc) + 8))();
      }
      FUN_0003d7a0(local_30,piVar3);
      (**(code **)(*piVar1 + 0x50))(local_30);
      FUN_0008b1f0();
      FUN_0010bc40();
      if (piVar1[0x168] != 0) {
        FUN_0005b5d0(1);
        piVar1[0x168] = 0;
      }
      piVar1[0x168] = (int)unaff_EBX;
      if (*(int *)(piVar1[2] + 0x1f8) != 0) {
        FUN_00056fe0(*(int *)(piVar1[2] + 0x1f8),piVar1,0);
      }
      FUN_0015b310(piVar1,1,0);
      return piVar1;
    }
    _DAT_004a5c10 = _DAT_004a5c10 + 1;
  }
  return (int *)0x0;
}
