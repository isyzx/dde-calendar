/*
* Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd.
*
* Author:     uniontech  <uniontech@uniontech.com>
*
* Maintainer: uniontech  <chenhaifeng@uniontech.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef GLOBALDEF_H
#define GLOBALDEF_H

#define PLUGIN_TITLE_NAME "日历"

#define LOG_FILENAME "/home/uniontech/.cache/deepin/dde-calendar/scheduleplugin.log"

#define SERVICE_NAME "scheduleX"

#define DBUS_SERVICE "com.deepin.daemon.Calendar"
#define DBUS_PATCH "/com/deepin/daemon/Calendar/Scheduler"

#define DBUS_CALENDAR_SERVICE "com.deepin.Calendar"
#define DBUS_CALENDAR_PATCH "/com/deepin/Calendar"
#define DBUS_CALENDAR_INTFACE "com.deepin.Calendar"

#define NEW_SCHEDULE "新建日程"

#define DATETIME_FRAME "yyyyMMdd hh:mm:ss"

#define PROCESS_OPEN_CALENDAR "dbus-send --print-reply --dest=com.deepin.Calendar /com/deepin/Calendar com.deepin.Calendar.RaiseWindow"

//日程重复类型
//每天
#define DBUS_RRUL_EVED "FREQ=DAILY"
//每周
#define DBUS_RRUL_EVEW "FREQ=WEEKLY"
//每月
#define DBUS_RRUL_EVEM "FREQ=MONTHLY"
//每年
#define DBUS_RRUL_EVEY "FREQ=YEARLY"
//每个工作日
#define DBUS_RRUL_WORK "FREQ=DAILY;BYDAY=MO,TU,WE,TH,FR"

//日程json关键字
#define JSON_CREATE "CREATE"
#define JSON_VIEW "VIEW"
#define JSON_CANCEL "CANCEL"
#define JSON_CHANGE "CHANGE"
#define JSON_NO_INTENT "NO_INTENT"
#define JSON_YES_INTENT "YES_INTENT"
//日程json槽位关键字
#define JSON_NAME "name"
#define JSON_CONTENT "content"
#define JSON_REPEAT "repeat"
#define JSON_DATETIME "datetime"
#define JSON_VALUE "value"
#define JSON_NORMVALUE "normValue"
#define JSON_PROPERTY "property"
#define JSON_NEXT "next"
#define JSON_LAST "last"
#define JSON_FROMDATETIME "fromTime"
#define JSON_TODATETIME "toTime"
#define JSON_TOPLACE "toPlace"
#define JSON_ALL "all"
#define JSON_THIS "this"
#define JSON_POSRANK_OFFSET "posRank.offset"

#define JOSN_DATE_DELIMITER "/"
#define JSON_DATETIME_DELIMITER "T"
//每天多少秒
#define ONE_DAY_SECS 60 * 60 * 24

//widget show
#define CONFIRM_BUTTON_STRING "确定"
#define CANCEL_BUTTON_STRING "取消"
#define DELETE_BUTTON_STRING "删除日程"
#define DELETEALL_BUTTON_STRING "删除全部"
#define ONLY_DELETE_THIS_BUTTON_STRING "仅删除此日程"

#define CHANGE_ALL_BUTTON_STRING "修改全部"
#define CHANGE_ONLYL_BUTTON_STRING "仅修改此日程"


#define CREATE_ERR_TTS "新建功能不支持此说法"
#define CANCEL_ERR_TTS "查询功能不支持此说法"
//没有对应日程的回复语
#define QUERY_ERR_TTS "您还没有日程提醒，无法寻找对应的日程！"
//修改日程询问回复语
#define CHANGE_TO_TTS "请问您要将此日程修改到什么时间或修改到什么内容？"
//错误操作回复语
#define G_ERR_TTS "当前场景不支持这个操作哦。"
//取消删除日程回复语
#define CANCEL_DELETION_TTS "已为您取消删除日程。"
//确认删除日程回复语
#define CONFIRM_DELETION_TTS "已为您删除日程。"
//取消修改日程回复语
#define CANCEL_CHANGE_TTS "已为您取消修改日程。"
//确认修改日程回复语
#define CONFIRM_CHANGE_TTS "已为您修改日程。"
//没有日程提醒回复语
#define NO_SCHEDULE_TTS "您还没有日程提醒。"
//删除重复日程询问回复语
#define REPEST_SCHEDULE_CANCEL_TTS "该日程是循环的日程，请问是删除当前日程还是所有日程？"
//删除普通日程询问回复语
#define CONFIRM_SCHEDULE_CANCEL_TTS "我要帮您取消这个日程吗？操作后将在日历中同步删除。"
//删除选择日程回复语
#define CANCEL_SELECT_TTS "这是您的所有日程，您要删除哪一个日程?"
//选择修改回复语
#define SELECT_CHANGE_TTS "这是您的所有日程，您要修改哪一个日程？"
//修改重复日程询问回复语
#define REPEST_SCHEDULE_CHANGE_TTS "该日程是循环的日程，请问是修改当前日程还是所有日程？"
//修改普通日程询问回复语
#define CONFIRM_SCHEDULE_CHANGE_TTS "我要帮您修改这个日程吗？操作后将在日历中同步修改。"
#define ALL_DAY "全天"
//修改或取消时间不在未来半年的回复语
#define OVERTIME_TTS "只能取消或修改未来半年的日程！"
//半年天数
#define MAXIMUM_DAYS_IN_THE_FUTURE 183
//不带窗口的回复宏定义
#define REPLY_ONLY_TTS(reply, msgtts, dsptts, isEnd) \
    reply.setReplyType(Reply::RT_STRING_TTS | Reply::RT_STRING_DISPLAY); \
    reply.ttsMessage(msgtts); \
    reply.displayMessage(dsptts); \
    reply.setShouldEndSession(isEnd); \

//带窗口的回复宏定义
#define REPLY_WIDGET_TTS(reply, widget, msgtts, dsptts, isEnd) \
    reply.setReplyType(Reply::RT_INNER_WIDGET | Reply::RT_STRING_TTS | Reply::RT_STRING_DISPLAY); \
    reply.setReplyWidget(widget); \
    reply.ttsMessage(msgtts); \
    reply.displayMessage(dsptts); \
    reply.setShouldEndSession(isEnd); \

//未来半年开始时间和结束时间
#define TIME_FRAME_IN_THE_NEXT_SIX_MONTHT \
    QDateTime beginTime = QDateTime::currentDateTime(); \
    QDateTime endTime = QDateTime::currentDateTime().addDays(180);

//modifyScheduleItem
#define MODIFY_ITEM_HEIGHT 48
//item圆角
#define ITEM_RADIUS 8

//最多显示10个item
#define ITEM_SHOW_NUM 10

#define OPENCALENDAR_WIDGET_TITLE "在“日历”中查看所有%1个结果..."
#define OPENCALENDAR_WDIGET_HEIGHT 17

#endif // GLOBALDEF_H
