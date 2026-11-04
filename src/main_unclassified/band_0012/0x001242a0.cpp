/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A636B62C5BAF87D18E245AF53E90120F48205F4EDD2CD1D088CAD2CD5F8DC2F
 * Entry: 0x001242a0, Ghidra index: 3680, label: FUN_001242a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern uint FUN_0005c0a0(void);
float10 FUN_001242a0(void)

{
  char cVar1;
  int in_EAX;
  
  if ((*(byte *)(*(int *)(in_EAX + 0x830) + 0x14) & 2) == 0) {
    return (float10)1.0;
  }
  if (*(int *)(in_EAX + 0x59c) != 0) {
    cVar1 = FUN_0005c0a0();
    if (cVar1 != '\0') {
      return (float10)0.1;
    }
  }
  return (float10)0.0;
}
