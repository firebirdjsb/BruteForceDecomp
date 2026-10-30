/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D03A5D0AA32C6FC85DA7A141F74A4094124D85B955D7F2728AF0C47EAE994B79
 * Entry: 0x002ea08b, Ghidra index: 10574, label: ??1exception@@UAE@XZ
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00386ae8;
/* Library Function - Single Match
    ??1exception@@UAE@XZ
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __1exception__UAE_XZ(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00386ae8;
  if (in_ECX[2] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[1]);
  }
  return;
}
