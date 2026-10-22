/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E2442DB2017BAE630BA593D7832A72DEAD746246E7DD5B3CB3D38D6B212219B3
 * Entry: 0x002955a0, Ghidra index: 9320, label: FUN_002955a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_002955aa_caseD_fffffffa[];
bool FUN_002955a0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  switch(*in_EAX) {
  case 0xfffffff9:
  case 0xfffffffb:
  case 0xfffffffc:
  case 0xfffffffd:
    return in_EAX[2] == *(int *)(in_ECX + 8);
  case 0xfffffffa:
    goto switchD_002955aa_caseD_fffffffa;
  case 0xfffffffe:
  case 0:
    return in_EAX[2] + 0x28 == *(int *)(in_ECX + 8) + 0x28;
  case 0xffffffff:
    if (*(double *)(in_ECX + 8) != *(double *)(in_EAX + 2)) {
      return false;
    }
switchD_002955aa_caseD_fffffffa:
    return true;
  default:
    return false;
  }
}
