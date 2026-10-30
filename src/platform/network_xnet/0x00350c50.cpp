/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 24BC3DF6F1175B712E59826FCBFA6EB489248C756F2473DC1AF24C2ACCD53247
 * Entry: 0x00350c50, Ghidra index: 13056, label: FUN_00350c50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_x86_word_lanes.h"
void FUN_00350c50(int param_1,uint param_2,short param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 == 0) {
    param_1 = in_ECX + 0xa4c;
    param_2 = (uint)*(ushort *)(in_ECX + 0xa54);
    param_3 = *(short *)(in_ECX + 0xa52);
    *(short *)(in_ECX + 0xa52) = 0;
  }
  if (param_3 != 0) {
    cVar1 = *(char *)(in_ECX + 0xa33);
    *(char *)(in_ECX + 0xa33) = cVar1 + '\x01';
    FUN_00350a7a(0x21c0,5,cVar1,0,0,0,0,0,0,0,0,param_1,param_2,param_3);
    iVar2 = (int)bf_x86_concat_u8((uint8_t)param_2,(uint8_t)(param_2 >> 8)) - 1;
    FUN_00350798(param_1,CONCAT11((char)iVar2,(char)((uint)iVar2 >> 8)),param_3);
  }
  return;
}
