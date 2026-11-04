/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9AE4746E305EFC3FB289F182FEAC6FDF6D1F9E1770115B87B190F4C4C3A052AB
 * Entry: 0x0012afd0, Ghidra index: 3780, label: FUN_0012afd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-only C++17 call declaration; guest ABI_UNVERIFIED. */
extern void FUN_001d46c0(void);
void FUN_0012afd0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = *in_EAX;
  unaff_ESI[1] = in_EAX[1];
  unaff_ESI[2] = in_EAX[2];
  unaff_ESI[3] = in_EAX[3];
  FUN_001d46c0();
  return;
}
