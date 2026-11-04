/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D4F109047273351E4D380ADFB4633B32408852FC31F509E7C864BA4BD2BF2AF1
 * Entry: 0x00316110, Ghidra index: 12128, label: FUN_00316110
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
extern uint32_t _DAT_fe820280;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00316110(uint param_1)

{
  FUN_003118f0();
  do {
  } while ((_DAT_fe820010 & 0xfffffffc) < 4);
  _DAT_fe820280 = param_1 & 7;
  FUN_00311923();
  return 0;
}
