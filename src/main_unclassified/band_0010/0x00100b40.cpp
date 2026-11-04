/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83240D36F49A83ADC711DC11E4A3E4C5EA3D70509D186C918D1E591E12FB8FFA
 * Entry: 0x00100b40, Ghidra index: 3221, label: FUN_00100b40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_00100b40(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  
  if ((*(int *)(unaff_EBX + 0x60) == 0) || (*(int *)(unaff_EBX + 0x60) == 0x15)) {
    if (*(int *)(unaff_EBX + 0xa0) == 0) {
      iVar1 = FUN_002ea01d(1);
      if (iVar1 != 0) {
        iVar3 = *(int *)(DAT_00469948 + 4) + 1;
        *(int *)(DAT_00469948 + 4) = iVar3;
        if (iVar3 == 1) {
          FUN_001e7880();
        }
        *(int *)(unaff_EBX + 0xa0) = iVar1;
        FUN_00100a90();
        return 1;
      }
      *(undefined4 *)(unaff_EBX + 0xa0) = 0;
    }
  }
  else if (*(int *)(unaff_EBX + 0xa4) == 0) {
    iVar1 = FUN_002ea01d(4);
    if (iVar1 != 0) {
      FUN_000f6da0();
      FUN_000f6e10();
      uVar2 = FUN_001e7820();
      *(undefined4 *)(unaff_EBX + 0xa4) = uVar2;
      FUN_00100a90();
      return 1;
    }
    *(undefined4 *)(unaff_EBX + 0xa4) = 0;
    FUN_00100a90();
    return 1;
  }
  FUN_00100a90();
  return 1;
}
