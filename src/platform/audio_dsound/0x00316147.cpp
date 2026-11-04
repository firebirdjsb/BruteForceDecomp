/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 477455A1CFD10202345B412C227DCE3E84DBD7CECFD67CE7260C8568171B7B64
 * Entry: 0x00316147, Ghidra index: 12129, label: CMcpxAPU_SetMixBinHeadroom
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched draft declarations; original Xbox ECX and ABI_UNVERIFIED. */
extern void FUN_003118f0(void);
extern void FUN_00311923(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fe820010;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DSOUND__CMcpxAPU_SetMixBinHeadroom(int param_1)

{
  int in_ECX;
  
  FUN_003118f0();
  do {
  } while ((_DAT_fe820010 & 0xfffffffc) < 4);
  *(uint *)(param_1 * 4 + -0x17dfe00) = *(byte *)(*(int *)(in_ECX + 0xc) + 0x14 + param_1) & 7;
  FUN_00311923();
  return 0;
}
