/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D2240C44D169A02A2B3A50C4FED769EE9EDC56F6CAB66A588D9481836C707F24
 * Entry: 0x002864f0, Ghidra index: 9079, label: FUN_002864f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Recorded 0x000FF730 four-DWORD guest call with final stack-word
 * address, and 0x000B2A50 source-level void() helper. Register inputs,
 * guest-memory translation and full Xbox ABI remain UNVERIFIED. */
extern undefined4 FUN_000ff730(undefined4, undefined4, undefined4, undefined4 *);
extern void FUN_000b2a50(void);
/* XBE 0x002864FC: LEA EAX,[ESP+0x10] after three register pushes;
 * 0x00286500-04 forwards the address of the entry ESP+4 DWORD to
 * 0x000FF730. Its 0x000FF777-7C copies exactly one DWORD through
 * that pointer. Original RET 4; implicit incoming ECX remains ABI_UNVERIFIED.
 * A host C pointer is only a syntax-level representation of this guest slot. */
void FUN_002864f0(undefined4 guest_incoming_word)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x14);
  iVar2 = FUN_000ff730(in_ECX + 0x10,iVar1,*(undefined4 *)(iVar1 + 4),&guest_incoming_word);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
