/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 229E781E0440B9BE0CBA0FEA91412412B499DBDEA85384802140EBB01A49B156
 * Entry: 0x001081f0, Ghidra index: 3383, label: FUN_001081f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001081f0(int *param_1)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  if (param_1 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 4))();
    if (iVar3 == 1) {
      FUN_00106b50();
      piVar1 = param_1;
      uStack_44 = 0;
      piVar4 = (int *)&param_1;
      if (iStack_48 <= (int)param_1) {
        piVar4 = &iStack_48;
      }
      cVar2 = FUN_00107e90(in_EAX,in_EAX + 0x1c,*piVar4,param_1,&uStack_44);
      *(char *)(in_EAX + 0x55) = '\x01' - (cVar2 != '\0');
      param_1 = (int *)0x1fd5db3d;
      uVar5 = FUN_001e97c0(uStack_44,piVar1);
      FUN_002ea9a9(auStack_40,0x20,uVar5);
      FUN_0010a7d0();
    }
  }
  return;
}
