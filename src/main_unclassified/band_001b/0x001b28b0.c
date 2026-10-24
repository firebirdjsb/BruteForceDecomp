/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2B4DC80CCFE04236C8E364CA2A6D968835933A8D8629640682FF5B5D3E53726B
 * Entry: 0x001b28b0, Ghidra index: 5627, label: FUN_001b28b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Retail XBE body SHA and the LEA at 0x001b28f9 were checked locally.
 * After the saved-register pushes, LEA [ESP+14h] points to
 * entry ESP+4. Both exits (0x001b291c / 0x001b296b) use RET 134h.
 * Only guest incoming stack storage/address is modeled here; implicit x86
 * register inputs, host ABI, and complete behavior remain UNVERIFIED. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[304];
} bf_001b28b0_guest_record;
_Static_assert(sizeof(bf_001b28b0_guest_record) == 308, "guest incoming stack byte count");
void FUN_001b28b0(bf_001b28b0_guest_record guest_record)

{
  int in_EAX;
  uint in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_EAX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_EAX + 8) - iVar2) / 0x134;
  }
  if (uVar1 < in_ECX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EAX + 8) - iVar2) / 0x134;
    }
    FUN_001bae70(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&guest_record.first_word);
    FUN_000e36d0();
    return;
  }
  if (iVar2 != 0) {
    if (in_ECX < (uint)((*(int *)(in_EAX + 8) - iVar2) / 0x134)) {
      FUN_001bae20(local_4,in_ECX * 0x134 + *(int *)(in_EAX + 4),*(int *)(in_EAX + 8));
    }
  }
  FUN_000e36d0();
  return;
}
