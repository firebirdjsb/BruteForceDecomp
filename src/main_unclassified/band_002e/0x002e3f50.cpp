/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A4E0BD07C646CBC8B6722B0C9DDC41382AB28998371CD141705E273DD04AD46
 * Entry: 0x002e3f50, Ghidra index: 10426, label: FUN_002e3f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing 0x002f2986 source declaration; Xbox ABI remains unverified.
 * Its two DWORD outputs require one live two-element local array.
 * Incoming ECX and object-address expressions below remain unresolved. */
extern undefined4 XAPILIB__QueryPerformanceCounter(undefined4 *param_1);
void FUN_002e3f50(void)

{
  int in_ECX;
  undefined4 local_8[2];
  
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(char *)(in_ECX + 0x20) != '\0') {
    XAPILIB__QueryPerformanceCounter(&local_8[0]);
    *(undefined4 *)(in_ECX + 0x10) = local_8[0];
    *(undefined4 *)(in_ECX + 0x14) = local_8[1];
  }
  return;
}
