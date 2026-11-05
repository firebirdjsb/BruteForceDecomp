/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E4EB056CEE3FB0D16600BBA32BF24BE0C203D1F3B271C421A129619D6C1E64F
 * Entry: 0x001dcb90, Ghidra index: 6581, label: FUN_001dcb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Exact existing C++ draft declaration only; ABI_UNVERIFIED.
 * The original caller also forwards hidden EAX and an extra stack word.
 * Its void source signature loses the returned EAX. These mismatches remain;
 * this declaration does not recover the Xbox register/stack/return ABI. */
extern int FUN_001d9150(int param_1,int param_2);
void FUN_001dcb90(undefined4 param_1,undefined4 param_2)

{
  FUN_001d9150(param_1,param_2);
  return;
}
