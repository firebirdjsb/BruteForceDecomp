/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4F1366DD5ABD9B3FDA2EC0B245110118CA16D8CCADBA75A155941C9D7866BF41
 * Entry: 0x002f463d, Ghidra index: 10856, label: OutputDebugStringA
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void XAPILIB__OutputDebugStringA(char *param_1)

{
  char cVar1;
  code *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (code *)swi(0x2d);
  (*pcVar2)(param_1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}
