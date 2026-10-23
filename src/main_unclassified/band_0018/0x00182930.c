/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5106398624F46F24D9CB6ADCDB5F584B245C615F9C48CC704C382BC0BABBAB7
 * Entry: 0x00182930, Ghidra index: 5183, label: FUN_00182930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00182930(void)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_ECX;
  
  switch(in_ECX) {
  case 0:
    cVar1 = FUN_001814c0();
    return (uint)(cVar1 == '\0');
  case 1:
    cVar1 = FUN_001814c0();
    return (uint)(cVar1 == '\0');
  case 2:
    cVar1 = FUN_001814c0();
    return (uint)(cVar1 == '\0');
  case 3:
    cVar1 = FUN_001814c0();
    return (uint)(cVar1 == '\0');
  default:
    return in_EAX & 0xffffff00;
  }
}
