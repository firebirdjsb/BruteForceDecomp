/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D0C724A4FEBC5D6E015DD5209449ADE09FD11223FBD11C8611886AE1234D043A
 * Entry: 0x002ecf93, Ghidra index: 10680, label: __flushall
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern int _flsall(int param_1);
/* Library Function - Single Match
    __flushall
   
   Library: Visual Studio 2003 Release */

void __flushall(void)

{
  _flsall(1);
  return;
}
