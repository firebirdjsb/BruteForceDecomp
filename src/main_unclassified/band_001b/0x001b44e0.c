/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98FD36F8A7F6491685D0A192D624ECA91846FFBCDEAC40DB5E8B44C2FE7790B1
 * Entry: 0x001b44e0, Ghidra index: 5655, label: FUN_001b44e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox 0x001B45C5 RET 0x0144 consumes a 0x144-byte incoming
 * by-value string/vector record, starting at entry ESP+4.
 * Original 0x001B4529 LEA [ESP+0x14] after four pushes addresses
 * its first DWORD. Last DWORD lives at guest record offset 0x140.
 * A native Windows/Linux/Android aggregate ABI still needs adapting. */
typedef struct bf_guest_sequence_record_144 {
  uint32_t word[0x51];
} bf_guest_sequence_record_144;
_Static_assert(sizeof(bf_guest_sequence_record_144) == 0x144,
               "original x86 RET 0x144 aggregate width");
void FUN_001b44e0(bf_guest_sequence_record_144 guest_record)

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
    uVar1 = (*(int *)(in_EAX + 8) - iVar2) / 0x144;
  }
  if (uVar1 < in_ECX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(in_EAX + 8) - iVar2) / 0x144;
    }
    /* Original x86 0x001B4529 passes address of FIRST guest record
     * word, not a new stack allocation or fabricated host pointer. */
    FUN_001c29e0(in_EAX,*(undefined4 *)(in_EAX + 8),in_ECX - iVar2,&guest_record);
  }
  else if (iVar2 != 0) {
    if (in_ECX < (uint)((*(int *)(in_EAX + 8) - iVar2) / 0x144)) {
      FUN_001c2990(local_4,in_ECX * 0x144 + *(int *)(in_EAX + 4),*(int *)(in_EAX + 8));
    }
  }
  if (0xf < guest_record.word[0x50]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(guest_record.word[0x4b]);
  }
  guest_record.word[0x50] = 0xf;
  guest_record.word[0x4f] = 0;
  guest_record.word[0x4b] = guest_record.word[0x4b] & 0xffffff00;
  FUN_00160220();
  return;
}
