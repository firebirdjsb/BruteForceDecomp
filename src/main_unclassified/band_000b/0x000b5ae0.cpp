/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 40C1879F1A61EC55192BECFBAC6380849222437D48F20617EA67AE61E130AF74
 * Entry: 0x000b5ae0, Ghidra index: 2190, label: FUN_000b5ae0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000b5ae0(void)

{
  byte *pbVar1;
  float fVar2;
  int in_EAX;
  int in_ECX;
  byte bVar3;
  
  if (in_ECX != *(int *)(in_EAX + 0xc0)) {
    *(int *)(in_EAX + 0xc0) = in_ECX;
    switch(in_ECX) {
    case 2:
      *(float *)(in_EAX + 0x84) =
           (float)*(byte *)(in_EAX + 0x81) * *(float *)(*(int *)(in_EAX + 0xbc) + 8) +
           *(float *)(*(int *)(in_EAX + 0xbc) + 4);
      pbVar1 = (byte *)(*(int *)(in_EAX + 100) + 0x13);
      *pbVar1 = *pbVar1 ^ (~(*(byte *)(in_EAX + 0x80) >> 1) ^
                          *(byte *)(*(int *)(in_EAX + 100) + 0x13)) & 1;
      if (*(char *)(in_EAX + 0x81) == '\0') {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 2) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 3) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 4) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      bVar3 = *(byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      if (*(byte *)(in_EAX + 0x81) < 5) {
        bVar3 = bVar3 | 1;
      }
      else {
        bVar3 = bVar3 & 0xfe;
      }
      *(byte *)(*(int *)(in_EAX + 0x78) + 0x13) = bVar3;
      if (*(byte *)(in_EAX + 0x81) < 6) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      fVar2 = (float)*(byte *)(in_EAX + 0x81);
      break;
    case 3:
      *(byte *)(*(int *)(in_EAX + 100) + 0x13) = *(byte *)(*(int *)(in_EAX + 100) + 0x13) & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined4 *)(in_EAX + 0x88) = 0;
      return;
    case 4:
      pbVar1 = (byte *)(*(int *)(in_EAX + 100) + 0x13);
      *pbVar1 = *pbVar1 ^ (~(*(byte *)(in_EAX + 0x80) >> 1) ^
                          *(byte *)(*(int *)(in_EAX + 100) + 0x13)) & 1;
      if (*(char *)(in_EAX + 0x81) == '\0') {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 2) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 3) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 4) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      bVar3 = *(byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      if (*(byte *)(in_EAX + 0x81) < 5) {
        bVar3 = bVar3 | 1;
      }
      else {
        bVar3 = bVar3 & 0xfe;
      }
      *(byte *)(*(int *)(in_EAX + 0x78) + 0x13) = bVar3;
      if (*(byte *)(in_EAX + 0x81) < 6) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
        fVar2 = (float)*(byte *)(in_EAX + 0x81);
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
        fVar2 = (float)*(byte *)(in_EAX + 0x81);
      }
      break;
    case 5:
      bVar3 = *(byte *)(*(int *)(in_EAX + 100) + 0x13);
      *(byte *)(*(int *)(in_EAX + 100) + 0x13) =
           bVar3 ^ (~(*(byte *)(in_EAX + 0x80) >> 1) ^ bVar3) & 1;
      *(byte *)(*(int *)(in_EAX + 0x68) + 0x13) = *(byte *)(*(int *)(in_EAX + 0x68) + 0x13) & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
      *pbVar1 = *pbVar1 & 0xfe;
      *(undefined4 *)(in_EAX + 0x88) = *(undefined4 *)(in_EAX + 0x90);
      return;
    case 6:
      pbVar1 = (byte *)(*(int *)(in_EAX + 100) + 0x13);
      *pbVar1 = *pbVar1 ^ (~(*(byte *)(in_EAX + 0x80) >> 1) ^
                          *(byte *)(*(int *)(in_EAX + 100) + 0x13)) & 1;
      if (*(char *)(in_EAX + 0x81) == '\0') {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 2) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 3) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      if (*(byte *)(in_EAX + 0x81) < 4) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 | 1;
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
      }
      bVar3 = *(byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      if (*(byte *)(in_EAX + 0x81) < 5) {
        bVar3 = bVar3 | 1;
      }
      else {
        bVar3 = bVar3 & 0xfe;
      }
      *(byte *)(*(int *)(in_EAX + 0x78) + 0x13) = bVar3;
      if (*(byte *)(in_EAX + 0x81) < 6) {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 | 1;
        fVar2 = (float)*(byte *)(in_EAX + 0x81);
      }
      else {
        pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
        *pbVar1 = *pbVar1 & 0xfe;
        fVar2 = (float)*(byte *)(in_EAX + 0x81);
      }
      break;
    default:
      *(byte *)(*(int *)(in_EAX + 100) + 0x13) = *(byte *)(*(int *)(in_EAX + 100) + 0x13) | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x68) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x6c) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x70) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x74) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x78) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      pbVar1 = (byte *)(*(int *)(in_EAX + 0x7c) + 0x13);
      *pbVar1 = *pbVar1 | 1;
      *(undefined4 *)(in_EAX + 0xbc) = 0;
      *(undefined1 *)(in_EAX + 0x82) = 0;
      *(undefined1 *)(in_EAX + 0x83) = 0;
      *(undefined1 *)(in_EAX + 0x81) = 0;
      *(undefined4 *)(in_EAX + 0x88) = 0;
      return;
    }
    *(float *)(in_EAX + 0x88) = fVar2 * *(float *)(in_EAX + 0xa8) + *(float *)(in_EAX + 0xa4);
    return;
  }
  return;
}
