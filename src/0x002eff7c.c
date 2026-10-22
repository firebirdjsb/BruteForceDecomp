/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6ECF743B5ED89A9010DF7DEE2494AF319235E4DFDD8D45FFE34C94367E45B27
 * Entry: 0x002eff7c, Ghidra index: 10731, label: __cintrindisp2
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f56c;
/* Library Function - Single Match
    __cintrindisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __cintrindisp2(void)

{
  __trandisp2();
  DAT_0040f56c = 1;
  FUN_002f0031();
  return;
}
