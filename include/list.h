/*
** list.h for aventure.h in /home/voyevoda/projet_perso/include
**
** Made by voyevoda
** Login   <voyevoda@epitech.net>
**
** Started on  Thu Oct 13 19:05:52 2016 voyevoda
** Last update Thu Oct 13 19:33:34 2016 voyevoda
*/

#ifndef LIST_H_
#define LIST_H_

typedef struct gen_list
{
  void *elem;
  struct gen_list *next;
  struct gen_list *prev;

}gen_list;
