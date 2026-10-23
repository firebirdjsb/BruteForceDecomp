/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6FE63B0208905EB7230AE33489FF303F1ED8BDB5A2D3333B45000AB9EE332ACD
 * Entry: 0x00162760, Ghidra index: 4641, label: FUN_00162760
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00162760(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x124;
}
