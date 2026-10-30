/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3222D3FC80D0303BB84F9CC0CC433D0308070CC7E39A9F5687D224D4837A337A
 * Entry: 0x0010e7a0, Ghidra index: 3516, label: FUN_0010e7a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469984;
bool FUN_0010e7a0(int param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 in_EAX;
  undefined4 uVar3;
  int in_ECX;
  char unaff_retaddr;
  undefined1 local_78 [4];
  int local_74;
  byte local_70;
  float fStack_30;
  undefined1 uStack_2c;
  int iStack_4;
  
  FUN_0010e750();
  if (in_ECX != 0) {
    cVar2 = FUN_00112790();
    if (cVar2 == '\0') {
      if ((param_3 != '\0') && (local_74 = *(int *)(param_1 + 0x18), local_74 != 0)) {
        local_70 = local_70 & 0xfc | (byte)in_EAX & 1;
        uVar3 = FUN_0017c080(*(undefined4 *)(local_74 + 8));
        *(undefined4 *)(param_1 + 8) = uVar3;
      }
    }
    else {
      uVar3 = FUN_0017c170(DAT_00469984);
      piVar1 = DAT_00469940;
      *(undefined4 *)(param_1 + 8) = uVar3;
      (**(code **)(*piVar1 + 0x50))(uVar3,0,0x3dcccccd);
      if (*(int *)(param_1 + 8) != 0) {
        FUN_0003f010();
        fStack_30 = (float)iStack_4 * 0.01;
        uStack_2c = 1;
        if (unaff_retaddr != '\0') {
          (**(code **)(**(int **)(param_1 + 0x18) + 0x40))();
          FUN_00040f10();
        }
        cVar2 = FUN_0017c110(local_78,in_EAX);
        if (cVar2 == '\0') {
          (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(param_1 + 8),1);
          *(undefined4 *)(param_1 + 8) = 0;
          return *(int *)(param_1 + 8) != 0;
        }
      }
    }
  }
  return *(int *)(param_1 + 8) != 0;
}
