/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D82B6BA57C11C7A9DCB4A465BE4F9CC07E2DC83C9305C1EC1CD1FBE116DEC7E1
 * Entry: 0x00087630, Ghidra index: 1618, label: FUN_00087630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_002ea018_heap_free_guest32.h"
/* Original x86 ABI (evidence: 0x00087631-0x00087638, 0x00087668):
 *   EAX = 32-bit guest range start; [entry ESP+4] = guest range end;
 *   RET (no callee argument pop); record stride = 0x20 bytes.
 * Twelve original direct CALL rel32 sites are recorded in
 * metadata/x86_callee_00087630_call_sites.csv.
 * The Ghidra draft below does NOT express EAX as a C formal parameter.
 * ABI_UNVERIFIED: this standalone host-C body is NOT safely linkable
 * without an evidence-reviewed 32-bit guest register/stack adapter.
 */
void FUN_00087630(int param_1)

{
  int in_EAX;
  int *piVar1;
  
  if (in_EAX != param_1) {
    piVar1 = (int *)(in_EAX + 0x14);
    do {
      if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      in_EAX = in_EAX + 0x20;
      piVar1 = piVar1 + 8;
    } while (in_EAX != param_1);
  }
  return;
}
