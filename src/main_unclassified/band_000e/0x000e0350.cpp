/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 282079256055A6BE17C291E284511DA7E0FA0CD1B23580552A79A34EEC66D3FA
 * Entry: 0x000e0350, Ghidra index: 2742, label: FUN_000e0350
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original entry ESP+12 is a caller-supplied DWORD; 0x000e0365 LEA forwards
 * its address to 0x000ff730, which copies exactly four bytes into node+8.
 * Host argument placement and implicit register ABI remain ABI_UNVERIFIED. */
extern undefined4 FUN_000ff730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4);
extern void FUN_000b2a50(void);

undefined4 * FUN_000e0350(int param_1,undefined4 *param_2,undefined4 guest_stack_word_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  iVar2 = FUN_000ff730(param_1 + 0x3c,iVar1,*(undefined4 *)(iVar1 + 4),&guest_stack_word_3);
  FUN_000b2a50();
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x40) + 4);
  return param_2;
}
