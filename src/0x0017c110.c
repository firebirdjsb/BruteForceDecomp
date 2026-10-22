/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F835C0C8FC94A40A4522DB4801E814F65091C6C08FC6898BEBD21F8617F81DFD
 * Entry: 0x0017c110, Ghidra index: 5040, label: FUN_0017c110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
uint FUN_0017c110(void)

{
  uint in_EAX;
  int iVar1;
  uint uVar2;
  undefined4 unaff_EBX;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    iVar1 = FUN_0017beb0(in_EAX);
    in_EAX = 0;
    if (iVar1 != 0) {
      FUN_00179c00();
      FUN_0017c0b0(unaff_EBX);
      uVar2 = (**(code **)(*DAT_00469940 + 0x28))();
      return uVar2;
    }
  }
  return in_EAX & 0xffffff00;
}
