/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0FEC6C64AEE972E32C65BB0C987BA20D121793AF92741A5A242BBF030AF62B71
 * Entry: 0x000dfb40, Ghidra index: 2732, label: FUN_000dfb40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000dfb40(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 0xe0);
  iVar2 = FUN_000ff730(in_EAX + 0xdc,iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
