/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFE1C8694A389FF580B6DBF4FC619A1D08B0466D13D4148C2278E078F393B88C
 * Entry: 0x00341b2d, Ghidra index: 12678, label: FUN_00341b2d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00341b2d(undefined4 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  pcVar1 = pcVar3;
  if (*pcVar3 != '\0') {
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    for (; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1) {
    }
    *param_1 = pcVar3;
    do {
      do {
        pcVar3 = pcVar2;
        pcVar2 = pcVar3 + -1;
      } while (*pcVar2 == ' ');
    } while (*pcVar2 == '\t');
    *pcVar3 = '\0';
  }
  return;
}
