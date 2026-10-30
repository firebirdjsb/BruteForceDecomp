/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 262BFDAC171DDB288D7588BAFCB508671417D015ED5B2F0E2BA2C8421B73FCEA
 * Entry: 0x002f783f, Ghidra index: 10929, label: FUN_002f783f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include <stdint.h>
#include <stddef.h>

/* Original loop increments the XBE section pointer by 0x38 and
 * loads SectionName from [EDI+0x14] (0x002F786A). */
typedef struct BF_XBE_SectionHeader {
  uint32_t Flags;
  uint32_t VirtualAddress;
  uint32_t VirtualSize;
  uint32_t FileAddress;
  uint32_t FileSize;
  uint32_t SectionName;
  uint32_t SectionReferenceCount;
  uint32_t HeadSharedReferenceCount;
  uint32_t TailSharedReferenceCount;
  uint8_t SectionDigest[20];
} BF_XBE_SectionHeader;
_Static_assert(sizeof(BF_XBE_SectionHeader) == 0x38, "Xbox section stride");
_Static_assert(offsetof(BF_XBE_SectionHeader, SectionName) == 0x14, "Xbox section name offset");

/* Guest32 section count [0x1011c] and first section [0x10120].
 * These are original Xbox memory slots, NOT valid host pointers. */
BF_XBE_SectionHeader * FUN_002f783f(undefined4 param_1)
{
  undefined1 local_14[8];
  undefined1 local_c[8];
  uint32_t count = *(uint32_t *)(uintptr_t)UINT32_C(0x0001011c);
  uint32_t guest_base = *(uint32_t *)(uintptr_t)UINT32_C(0x00010120);
  uint32_t guest_end = guest_base + count * UINT32_C(0x38);
  uint32_t guest_section = guest_base;

  RtlInitAnsiString(local_14,param_1);
  while (guest_section < guest_end) {
    BF_XBE_SectionHeader *section = (BF_XBE_SectionHeader *)(uintptr_t)guest_section;
    RtlInitAnsiString(local_c,section->SectionName);
    if (RtlEqualString(local_14,local_c,1) != 0)
      return section;
    guest_section += UINT32_C(0x38);
  }
  XAPILIB__SetLastError(0x490);
  return (BF_XBE_SectionHeader *)(uintptr_t)UINT32_MAX;
}
