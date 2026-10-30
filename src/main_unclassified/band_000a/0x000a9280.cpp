/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E1E19CF933A01C07CDF5B4C3F5E90FD5151DEEBA2F5778F2FFD7089BC1A7740D
 * Entry: 0x000a9280, Ghidra index: 2022, label: FUN_000a9280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a9280(int param_1,float param_2)

{
  *(char *)(param_1 + 0x10) = (char)(int)(param_2 * 255.0);
  return;
}
