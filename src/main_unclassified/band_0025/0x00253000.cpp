/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5133AF76C06A88A55E75F1128336018A58F193EA01D0E3CBB7839526670570D
 * Entry: 0x00253000, Ghidra index: 8392, label: FUN_00253000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Retail XBE body SHA-256 C5133AF76C06A88A55E75F1128336018A58F193EA01D0E3CBB7839526670570D.
 * 0x0025302c LEA EDX,[ESP+10h] targets entry ESP+4 after
 * PUSH ECX/ESI/EDI. 0x00253072 MOV EAX,[ESP+1ch] reads entry
 * ESP+10h; 0x00253083 RET 10h confirms four incoming DWORDs.
 * The separately inferred in_stack_00000010 is retained pending ABI
 * reconstruction; this record models guest storage only. */
typedef struct {
  undefined4 first_word;
  undefined1 opaque_tail[12];
} bf_00253000_guest_record;
_Static_assert(sizeof(bf_00253000_guest_record) == 16, "ret 10h guest argument bytes");
void FUN_00253000(bf_00253000_guest_record guest_record)

{
  uint in_EAX;
  int in_ECX;
  uint uVar1;
  int iVar2;
  int *in_stack_00000010;
  undefined1 local_4 [4];
  
  iVar2 = *(int *)(in_ECX + 4);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(in_ECX + 8) - iVar2 >> 4;
  }
  if (uVar1 < in_EAX) {
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(in_ECX + 8) - iVar2 >> 4;
    }
    FUN_00253090(in_ECX,*(undefined4 *)(in_ECX + 8),in_EAX - iVar2,&guest_record.first_word);
  }
  else if (iVar2 != 0) {
    if (in_EAX < (uint)(*(int *)(in_ECX + 8) - iVar2 >> 4)) {
      FUN_00253450(local_4,in_EAX * 0x10 + *(int *)(in_ECX + 4),*(int *)(in_ECX + 8));
    }
  }
  if (in_stack_00000010 != (int *)0x0) {
    (**(code **)(*in_stack_00000010 + 8))(in_stack_00000010);
  }
  return;
}
