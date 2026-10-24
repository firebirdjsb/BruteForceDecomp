/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0827CBAD16EBFCE2E888572839B5933FC337D20CCC9AF37BEB06E68F91F1C36
 * Entry: 0x00122900, Ghidra index: 3663, label: FUN_00122900
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x00122914: LEA EAX,[ESP+0x10] after three register pushes;
 * 0x00122918-1C forwards the address of the entry ESP+4 DWORD to
 * 0x000FF730. Its 0x000FF777-7C copies exactly one DWORD through
 * that pointer. Original RET 4; implicit incoming EAX remains ABI_UNVERIFIED.
 * A host C pointer is only a syntax-level representation of this guest slot. */
void FUN_00122900(undefined4 guest_incoming_word)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0x55c);
  iVar2 = FUN_000ff730(in_EAX + 0x558,iVar1,*(undefined4 *)(iVar1 + 4),&guest_incoming_word);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
