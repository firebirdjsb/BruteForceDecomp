/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B0B442FD1D95B52E3DEBB9224E07DC4C5FE97B6F8258736224D80D0B6148FCE
 * Entry: 0x002c9670, Ghidra index: 10139, label: FUN_002c9670
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "../../contracts/bf_002c96d0_object_operations.h"
void FUN_002c9670(void)
{
  void *in_ECX;
  uint32_t unaff_EDI;
  /* ABI_UNVERIFIED: original entry receives ECX/EDI, not C arguments.
   * The entry wrapper still has unbound register inputs. Only callers with
   * established bindings may use the shared observed memory operation. */
  bf_002c9670_produce(in_ECX, unaff_EDI);
}
