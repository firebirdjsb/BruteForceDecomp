/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33C0A072C1232CB626C7F10E7E0BCCFBCBE0F3BDD6B1FA8328EABBE2808C3094
 * Entry: 0x00108360, Ghidra index: 3385, label: FUN_00108360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_parser_data_labels_x86.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_00108360(void)

{
  int *in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_200 [512];
  
  if ((in_EAX != (int *)0x0) && (iVar1 = (**(code **)(*in_EAX + 4))(), iVar1 == 1)) {
    iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1d8))();
    if (iVar1 != 0) {
      uVar2 = FUN_001e97c0();
      uVar2 = FUN_001e97c0(uVar2);
      FUN_002ea9a9(auStack_200,0xff,u__s_s_0040cd58,uVar2);
      FUN_0010a7d0();
      return;
    }
    FUN_001e97c0();
    FUN_0010a7d0();
    if (in_EAX[9] == DAT_0046d064) {
      in_EAX[9] = 0xed8605a;
      (**(code **)(*in_EAX + 0x2c))();
    }
  }
  return;
}
