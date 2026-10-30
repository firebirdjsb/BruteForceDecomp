/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98B85022A810F1EABE7675F5FF5E5024C93B747B42256F05D652C38E6D1A0F1A
 * Entry: 0x00243ee0, Ghidra index: 8066, label: FUN_00243ee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original retail XBE SHA and body digest verified; LEA 0x00243f29
 * addresses guest entry ESP+4 after saved-register/temporary pushes.
 * Both exits (0x00243f4c / 0x00243f98) use RET 2ch.
 * This models incoming guest storage only; x86 register ABI, native host
 * ABI, indirect call contracts and behavior remain UNVERIFIED. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[40];
} bf_00243ee0_guest_record;
_Static_assert(sizeof(bf_00243ee0_guest_record) == 44, "guest incoming stack byte count");
void FUN_00243ee0(bf_00243ee0_guest_record guest_record)

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
    uVar1 = (*(int *)(in_EAX + 8) - iVar2) / 0x2c;
  }
  if (uVar1 < in_ECX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EAX + 8) - iVar2) / 0x2c;
    }
    FUN_00247770(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&guest_record.first_word);
    FUN_00241780();
    return;
  }
  if (iVar2 != 0) {
    if (in_ECX < (uint)((*(int *)(in_EAX + 8) - iVar2) / 0x2c)) {
      FUN_00247720(local_4,in_ECX * 0x2c + *(int *)(in_EAX + 4),*(int *)(in_EAX + 8));
    }
  }
  FUN_00241780();
  return;
}
