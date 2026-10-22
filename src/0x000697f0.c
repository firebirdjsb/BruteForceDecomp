/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7B2BA611FB73ACB5F72B0ED57C590205B6A580B428933C07A6252B3EC49BF55
 * Entry: 0x000697f0, Ghidra index: 1166, label: FUN_000697f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t DAT_00469b58;
undefined4 FUN_000697f0(void)

{
  char cVar1;
  undefined1 local_110 [5];
  undefined1 local_10b [267];
  
  FUN_00067eb0();
  DAT_00469b58 = local_110;
  DAT_00469b54 = local_110;
  cVar1 = FUN_00068340();
  if (cVar1 != '\0') {
    do {
      FUN_00069270();
    } while( true );
  }
  FUN_0006a6e0(local_10b);
  return 0;
}
