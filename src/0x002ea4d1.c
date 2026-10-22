/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 941429327D4C724FD0F0B2616CA4FFA105F96721621D0DBB7C73EA3D920808F2
 * Entry: 0x002ea4d1, Ghidra index: 10581, label: ___onexitinit
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fa4;
extern uint32_t *DAT_004a8fa8;
/* Library Function - Single Match
    ___onexitinit
   
   Library: Visual Studio 2003 Release */

undefined4 ___onexitinit(void)

{
  DAT_004a8fa8 = (undefined4 *)thunk_FUN_00237ea0(0x80);
  if (DAT_004a8fa8 == (undefined4 *)0x0) {
    return 0x18;
  }
  *DAT_004a8fa8 = 0;
  DAT_004a8fa4 = DAT_004a8fa8;
  return 0;
}
