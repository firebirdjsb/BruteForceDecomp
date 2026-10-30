/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 418924004CD1941115E55F6E5B38A814D4C3B079B4E37A55B9786B5FDA4BC163
 * Entry: 0x001b4a70, Ghidra index: 5658, label: FUN_001b4a70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Retail XBE body SHA and the LEA at 0x001b4abd were checked locally.
 * After the saved-register pushes, LEA [ESP+14h] points to
 * entry ESP+4. Both exits (0x001b4ae0 / 0x001b4b32) use RET 344h.
 * Only guest incoming stack storage/address is modeled here; implicit x86
 * register inputs, host ABI, and complete behavior remain UNVERIFIED. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[832];
} bf_001b4a70_guest_record;
_Static_assert(sizeof(bf_001b4a70_guest_record) == 836, "guest incoming stack byte count");
void FUN_001b4a70(bf_001b4a70_guest_record guest_record)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(unaff_ESI + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x344;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(unaff_ESI + 8) - iVar2) / 0x344;
    }
    FUN_001c4930(unaff_ESI,*(undefined4 *)(unaff_ESI + 8),in_EAX - iVar2,&guest_record.first_word);
    FUN_00160320();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(unaff_ESI + 8) - iVar2) / 0x344)) {
      FUN_001c48b0(unaff_ESI,local_4,in_EAX * 0x344 + *(int *)(unaff_ESI + 4),
                   *(int *)(unaff_ESI + 8));
    }
  }
  FUN_00160320();
  return;
}
