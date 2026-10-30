/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAD45F330E8E163AA9F0992ED44781792570C5AEE1A1E954BF77E0E9E4519F0F
 * Entry: 0x000c11f0, Ghidra index: 2351, label: FUN_000c11f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_001e7820(void);

void FUN_000c11f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBX;
  
  if (((*(int *)(unaff_EBX + 0x34) != 0) && (*(int *)(unaff_EBX + 0xc0) == 0)) &&
     (*(int *)(*(int *)(unaff_EBX + 0x34) + 0x60) != 0)) {
    iVar1 = FUN_002ea01d(4);
    if (iVar1 != 0) {
      uVar2 = FUN_001e7820();
      *(undefined4 *)(unaff_EBX + 0xc0) = uVar2;
      return;
    }
    *(undefined4 *)(unaff_EBX + 0xc0) = 0;
  }
  return;
}
