/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9E3FC5AC872B999B2D0597C4107D663536B43948AB4F8BD6206A85853030A4A
 * Entry: 0x000e1fd0, Ghidra index: 2784, label: FUN_000e1fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original x86 guest ABI remains ABI_UNVERIFIED. */
extern void FUN_000e2070(void);
void FUN_000e1fd0(void)

{
  undefined4 in_EAX;
  undefined4 in_ECX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = in_EAX;
  unaff_ESI[1] = in_ECX;
  FUN_000e2070();
  return;
}
