/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E375ED5ED8277D8D3ED125BEDA3C188B222F74B85989DDE11D7150BD78285152
 * Entry: 0x00244000, Ghidra index: 8068, label: FUN_00244000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original retail XBE SHA and body digest verified; LEA 0x00244049
 * addresses guest entry ESP+4 after saved-register/temporary pushes.
 * Both exits (0x0024406c / 0x002440b9) use RET 2ch.
 * This models incoming guest storage only; x86 register ABI, native host
 * ABI, indirect call contracts and behavior remain UNVERIFIED. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[40];
} bf_00244000_guest_record;
_Static_assert(sizeof(bf_00244000_guest_record) == 44, "guest incoming stack byte count");
void FUN_00244000(bf_00244000_guest_record guest_record)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_ECX + 8) - iVar2) / 0x2c;
    }
    FUN_00247c10(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_record.first_word);
    FUN_002430a0();
    return;
  }
  if (iVar2 != 0) {
    if (in_EAX < (uint)((*(int *)(in_ECX + 8) - iVar2) / 0x2c)) {
      FUN_00247ba0(in_ECX,local_4,in_EAX * 0x2c + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  FUN_002430a0();
  return;
}
