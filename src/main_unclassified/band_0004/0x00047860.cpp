/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96BD81A56D7C0EFE545A9B22D40DC45E8F96DC4F782EC73C92B6BA497A3A153A
 * Entry: 0x00047860, Ghidra index: 560, label: FUN_00047860
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_00126af0(void);
extern undefined4 FUN_00126ac0(void);
extern int FUN_00126b20(void);

bool FUN_00047860(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined4 in_ECX;
  
  if (in_EAX != 0) {
    switch(in_ECX) {
    case 0:
      return *(int *)(in_EAX + 0x1f8) == 5;
    case 1:
      uVar1 = FUN_00126af0();
      return (bool)uVar1;
    case 2:
      uVar1 = FUN_00126ac0();
      return (bool)uVar1;
    case 3:
      return *(int *)(in_EAX + 0x1f8) == 0xe;
    case 4:
      uVar1 = FUN_00126b20();
      return (bool)uVar1;
    case 5:
      return *(int *)(in_EAX + 0x1f8) == 0x19;
    case 6:
      return *(int *)(in_EAX + 0x1f8) == 0xd;
    case 7:
      return *(int *)(in_EAX + 0x1f8) == 0x30;
    case 8:
      return *(int *)(in_EAX + 0x1f8) == 0x2c;
    }
  }
  return false;
}
