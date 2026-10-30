/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3507F914F301BBFCEE45522EFBDB185004D2FB974C6080863F399F2FA74F1B00
 * Entry: 0x002effba, Ghidra index: 10732, label: __cintrindisp1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f56c;
/* Library Function - Single Match
    __cintrindisp1
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2019 */

void __cintrindisp1(void)

{
  __trandisp1();
  DAT_0040f56c = 1;
  FUN_002f0031();
  return;
}
