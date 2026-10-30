/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF069B875EBEEC3E9E0FABD83C02392E58B07ABB263A5F2668B77352EADA4EBE
 * Entry: 0x00033ac0, Ghidra index: 337, label: FUN_00033ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0004e8f0(void);

undefined4 FUN_00033ac0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_000120f0();
  *(undefined1 *)(iVar1 + 0x670) = 0;
  FUN_0004e8f0();
  *(undefined4 *)(in_ECX + 0x860) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x85d) = 0;
  return 1;
}
