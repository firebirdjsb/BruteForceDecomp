/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 83EC9B235653568FB808DECDAABBD075CC4C7C14781DBF5A9B1847E4716DF623
 * Entry: 0x001b5300, Ghidra index: 5668, label: FUN_001b5300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Retail XBE body SHA and the LEA at 0x001b532d were checked locally.
 * After the saved-register pushes, LEA [ESP+8h] points to
 * entry ESP+4. Both exits (0x001b5342 / 0x001b5374) use RET 8h.
 * Only guest incoming stack storage/address is modeled here; implicit x86
 * register inputs, host ABI, and complete behavior remain UNVERIFIED. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[4];
} bf_001b5300_guest_record;
_Static_assert(sizeof(bf_001b5300_guest_record) == 8, "guest incoming stack byte count");
void FUN_001b5300(bf_001b5300_guest_record guest_record)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 4);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(unaff_ESI + 8) - iVar3 >> 3;
  }
  if (uVar2 < in_EAX) {
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(unaff_ESI + 8) - iVar3 >> 3;
    }
    FUN_001bd760(*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar3,&guest_record.first_word);
    return;
  }
  if (((iVar3 != 0) && (iVar1 = *(int *)(unaff_ESI + 8), in_EAX < (uint)(iVar1 - iVar3 >> 3))) &&
     (iVar3 + in_EAX * 8 != iVar1)) {
    uVar4 = FUN_001cec30(iVar1,iVar1);
    *(undefined4 *)(unaff_ESI + 8) = uVar4;
  }
  return;
}
